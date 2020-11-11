/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface CNStack : NSObject {

	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id peek; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 ;
-(id)peek;
-(void)push:(id)arg1 ;
-(id)pop;
-(id)popAll;
-(void)popWithHandler:(/*^block*/id)arg1 ;
-(void)popAllWithHandler:(/*^block*/id)arg1 ;
@end
