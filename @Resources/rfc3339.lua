--- @module rfc3339
-- This source is subject to the MIT License.
-- Please see the LICENSE file for more information.
-- All other rights reserved.

function Update()
  for syear, smonth, sday, shr, smin, ssecond, smsec, stzhr, stzmin in string.gmatch(SELF:GetOption("Date"), "(%d+)-(%d+)-(%d+)T(%d+):(%d+):(%d+).(%d+)([+-]%d+):(%d+)") do
    t = {year = syear, month = smonth, day = sday, hour = shr+stzhr, min = smin, sec = ssecond}
    return os.time(t) + 11644473600
  end
end
