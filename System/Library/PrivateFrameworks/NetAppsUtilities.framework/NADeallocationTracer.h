/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NADeallocationTracerDelegate;
@interface NADeallocationTracer : NSObject {

	id<NADeallocationTracerDelegate> _delegate;

}

@property (assign,nonatomic) id<NADeallocationTracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NADeallocationTracerDelegate>)delegate;
-(void)setDelegate:(id<NADeallocationTracerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
