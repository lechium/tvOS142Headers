/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject {

	BOOL _exists;
	NSURL* _URL;

}

@property (copy,readonly) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
@property (getter=isExists,readonly) BOOL exists;              //@synthesize exists=_exists - In the implementation block
+(id)defaultCache;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)isExists;
@end

