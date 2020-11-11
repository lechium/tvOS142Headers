/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSBagProtocol;
@class NSString;

@interface AMSUIPaymentVerificationMetrics : NSObject {

	id<AMSBagProtocol> _bag;
	NSString* _displayReason;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * displayReason;              //@synthesize displayReason=_displayReason - In the implementation block
+(id)_event;
+(id)_metricsInstanceWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(void)flushEvents;
-(id)_propertiesWithPageId:(id)arg1 displayReason:(id)arg2 ;
-(id)_propertiesWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3 ;
-(void)enqueueEventWithPageId:(id)arg1 displayReason:(id)arg2 ;
-(void)enqueueEventWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3 ;
-(NSString *)displayReason;
-(void)setDisplayReason:(NSString *)arg1 ;
@end

