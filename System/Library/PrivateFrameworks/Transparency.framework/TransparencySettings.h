/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface TransparencySettings : NSObject {

	NSDictionary* _settings;

}

@property (retain) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)allowsInternalSecurityPolicies;
+(double)defaultNetworkTimeout;
+(BOOL)getBool:(id)arg1 ;
+(id)deviceUserAgent;
+(double)defaultQueryCacheTimeout;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
@end

