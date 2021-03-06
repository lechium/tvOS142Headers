/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNAmbObserverDelegate;
@class NSString;

@interface _CNAmbObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNAmbObserverDelegate> _delegate;
	BOOL _isWinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
-(void)declareWinner;
@end

