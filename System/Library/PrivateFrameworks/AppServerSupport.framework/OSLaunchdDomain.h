/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OSLaunchdDomain : NSObject {

	int _type;
	unsigned long long _handle;

}
+(id)currentDomain;
+(id)domainForUser:(unsigned)arg1 ;
+(id)domainForPid:(int)arg1 ;
+(id)loginwindowDomain;
-(id)initWithType:(int)arg1 handle:(unsigned long long)arg2 ;
@end
