/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSDoubleLinkedListNode.h>

@protocol NSCopying;
@interface SSLRUCacheItem : SSDoubleLinkedListNode {

	id<NSCopying> _key;

}

@property (assign,nonatomic,__weak) id<NSCopying> key;              //@synthesize key=_key - In the implementation block
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
@end

