/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AXAssertion : NSObject {

	NSString* _assertionType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * assertionType;                      //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleSynchronously; 
+(id)assertionWithType:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setAssertionType:(NSString *)arg1 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(NSString *)assertionType;
-(BOOL)shouldHandleSynchronously;
-(BOOL)_hasValidAssertionType;
@end

