/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CPDistributedMessagingCallout : NSObject {

	id _target;
	SEL _selector;
	BOOL _returnsVoid;
	BOOL _returnsVoidIsValid;

}

@property (nonatomic,retain,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL returnsVoid;              //@synthesize returnsVoid=_returnsVoid - In the implementation block
-(void)dealloc;
-(SEL)selector;
-(id)target;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)returnsVoid;
@end

