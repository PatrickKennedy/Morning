-- This source is subject to the MIT License.
-- Please see the LICENSE file for more information.
-- All other rights reserved.

function Update()
  return get_timezone()
end

function get_timezone()
  local now = os.time()
  local offset = os.difftime(now, os.time(os.date("!*t", now)))
  local h, m = math.modf(offset / 3600)
  local dst = os.date("*t").isdst and 1 or 0
  return string.format("%+.2d:", h+dst) .. string.format("%.2d", m)
end
