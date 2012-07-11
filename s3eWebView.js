/*
 * Copyright (C) 2001-2012 Ideaworks3D Ltd.
 * All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Ideaworks Labs.
 * This file consists of source code released by Ideaworks Labs under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
/*
 * This javascript code must be included into any webapp that wants to
 * make callbacks to native (C/C++) code on iOS.
 *
 * Ideally this would be inject automatically by the iOS extension but
 * I wasn't able to find a javascript injection hook that would allow
 * me to run this code on a new page before the onload handlers.  So we
 * have to ask the application to load this bit of javascript.
 */
function _iOS()
{
  return 0;
}

if (navigator.userAgent.match(/(iPad)|(iPhone)|(iPod)/i))
{
    _iOS();
}
