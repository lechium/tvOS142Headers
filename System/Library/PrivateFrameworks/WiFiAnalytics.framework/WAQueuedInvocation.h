/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSInvocation;

@interface WAQueuedInvocation : NSObject {

	NSInvocation* _invocation;
	/*^block*/id _reply;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,copy) id reply;                                 //@synthesize reply=_reply - In the implementation block
-(NSInvocation *)invocation;
-(void)setReply:(id)arg1 ;
-(id)reply;
-(void)setInvocation:(NSInvocation *)arg1 ;
@end

