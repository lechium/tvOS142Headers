/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWDeferredDataIntermediate.h>

@class NSDictionary;

@interface BWDeferredDictionaryIntermediate : BWDeferredDataIntermediate {

	NSDictionary* _dictionary;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)flush;
-(int)setArchive:(id)arg1 ;
-(id)archive:(int*)arg1 ;
-(id)initWithDictionary:(id)arg1 tag:(id)arg2 URL:(id)arg3 ;
-(int)setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2 ;
@end

