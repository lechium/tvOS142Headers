/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, AAURLConfiguration, NSHTTPURLResponse;

@interface AARemoteServerConfigurationCache : NSObject {

	NSDate* _creationDate;
	AAURLConfiguration* _configuration;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAURLConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * response;                    //@synthesize response=_response - In the implementation block
+(id)cacheWithConfiguration:(id)arg1 response:(id)arg2 ;
-(id)init;
-(NSHTTPURLResponse *)response;
-(NSDate *)creationDate;
-(AAURLConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 response:(id)arg2 ;
@end

