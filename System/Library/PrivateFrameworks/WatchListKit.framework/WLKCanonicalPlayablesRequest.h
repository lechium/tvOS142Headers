/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalPlayablesRequest : WLKRequest {

	NSString* _canonicalID;
	NSString* _statsID;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * statsID;                  //@synthesize statsID=_statsID - In the implementation block
-(NSString *)canonicalID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCanonicalID:(id)arg1 ;
-(id)initWithStatsID:(id)arg1 ;
-(NSString *)statsID;
@end
