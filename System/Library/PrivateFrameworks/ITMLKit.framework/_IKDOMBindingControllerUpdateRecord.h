/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _IKDOMBindingControllerUpdateRecord : NSObject {

	BOOL _cancelled;
	/*^block*/id _preUpdate;
	/*^block*/id _update;

}

@property (nonatomic,copy) id preUpdate;                                     //@synthesize preUpdate=_preUpdate - In the implementation block
@property (nonatomic,copy) id update;                                        //@synthesize update=_update - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)update;
-(id)preUpdate;
-(void)setPreUpdate:(id)arg1 ;
-(void)setUpdate:(id)arg1 ;
@end
