/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService {

	NSString* _protocolVersion;

}

@property (nonatomic,retain) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(id)init;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(id)urlRequest;
-(id)baseUrl;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)platformAction;
@end

