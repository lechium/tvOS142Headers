/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BKSHIDEventKeyCommandsDispatchingRule;

@interface _BKHIDKeyCommandDeliveryRoot : NSObject {

	NSString* _identifier;
	BKSHIDEventKeyCommandsDispatchingRule* _dispatchingRule;

}

@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) BKSHIDEventKeyCommandsDispatchingRule * dispatchingRule;              //@synthesize dispatchingRule=_dispatchingRule - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BKSHIDEventKeyCommandsDispatchingRule *)dispatchingRule;
-(void)setDispatchingRule:(BKSHIDEventKeyCommandsDispatchingRule *)arg1 ;
@end

