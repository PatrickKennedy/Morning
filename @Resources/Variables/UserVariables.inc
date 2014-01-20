; This source is subject to the MIT License.
; Please see the LICENSE file for more information.
; All other rights reserved.

[Variables]
; Due to limitations in variables we have to build the url ourselves later
; that means here we just need the basic url as it gives us the email address
; and private key necessary.
; The following url will be broken into
; calendar=example@gmail.com
; secret=ac359f4ef20fba2f91003f44bff8a527
;
; This also works with group calendars:
; calendar=pnua6k5k3713hhb7fdaaovh50k%40group.calendar.google.com
; secret=8f668a192120068568409b74ce034a85

raw_url=https://www.google.com/calendar/feeds/example@gmail.com/private-ac359f4ef20fba2f91003f44bff8a527/basic

[MeasureSplitRawURLUserID]
Measure=Time
UpdateDivider=-1
Format=#raw_url#
RegExpSubstitute=1
Substitute="(?siU).*?feeds/(.*?)/private.*?":"\1"
DynamicVariables=1
OnUpdateAction=[!SetVariable calendar [MeasureSplitRawURLUserID]]

[MeasureSplitRawURLSecret]
Measure=Time
UpdateDivider=-1
Format=#raw_url#
RegExpSubstitute=1
Substitute="(?siU).+?private-(.*?)/basic.*?":"\1"
DynamicVariables=1
OnUpdateAction=[!SetVariable secret [MeasureSplitRawURLSecret]]
