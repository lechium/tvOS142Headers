/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _object;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(IMDoubleLinkedListNode *)next;
-(IMDoubleLinkedListNode *)prev;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(void)removeFromList;
-(void)orphan;
@end

