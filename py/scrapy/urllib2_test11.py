#urllib2_test11.py
# -*- coding:utf-8 -*-
from urllib2 import Request, urlopen, URLError, HTTPError

old_url = 'http://www.baidu.com'
req = Request(old_url)
response = urlopen(req)
print 'Info():'
print response.info()
#试试