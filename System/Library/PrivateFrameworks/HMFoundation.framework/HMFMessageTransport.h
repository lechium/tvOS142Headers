/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMFMessageTransportDelegate;
@interface HMFMessageTransport : HMFObject {

	id<HMFMessageTransportDelegate> _delegate;

}

@property (__weak) id<HMFMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HMFMessageTransportDelegate>)delegate;
-(void)setDelegate:(id<HMFMessageTransportDelegate>)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

