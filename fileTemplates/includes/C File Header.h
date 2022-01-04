#set($ORGANIZATION_NAME = "Oneiro Games")
#set($USER_NAME = "Dezlow")

#if ($HEADER_COMMENTS)
//
// Created by $USER_NAME on ${DATE}.
#if ($ORGANIZATION_NAME && $ORGANIZATION_NAME != "")
// Copyright (c) $YEAR ${ORGANIZATION_NAME}#if (!$ORGANIZATION_NAME.endsWith(".")).#end All rights reserved.
#end
//
#end

