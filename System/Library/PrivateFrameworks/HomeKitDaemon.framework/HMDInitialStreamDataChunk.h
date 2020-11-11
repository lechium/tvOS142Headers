/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDStreamDataChunk.h>

@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk {

	NSString* _type;

}

@property (copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(id)attributeDescriptions;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithData:(id)arg1 isLast:(BOOL)arg2 type:(id)arg3 ;
@end

