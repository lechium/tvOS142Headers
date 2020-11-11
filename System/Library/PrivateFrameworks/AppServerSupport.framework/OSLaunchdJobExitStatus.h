/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OSLaunchdJobExitStatus : NSObject {

	unsigned _os_reason_namespace;
	int _wait4Status;
	unsigned long long _os_reason_flags;
	unsigned long long _os_reason_code;

}

@property (nonatomic,readonly) unsigned long long os_reason_flags;              //@synthesize os_reason_flags=_os_reason_flags - In the implementation block
@property (nonatomic,readonly) unsigned os_reason_namespace;                    //@synthesize os_reason_namespace=_os_reason_namespace - In the implementation block
@property (nonatomic,readonly) unsigned long long os_reason_code;               //@synthesize os_reason_code=_os_reason_code - In the implementation block
@property (nonatomic,readonly) int wait4Status;                                 //@synthesize wait4Status=_wait4Status - In the implementation block
-(id)initWithWait4Status:(int)arg1 os_reason_namespace:(unsigned)arg2 os_reason_code:(unsigned long long)arg3 os_reason_flags:(unsigned long long)arg4 ;
-(unsigned long long)os_reason_flags;
-(unsigned)os_reason_namespace;
-(unsigned long long)os_reason_code;
-(int)wait4Status;
@end

