/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNObservableSkipUntilInputObserverDelegate;
@class NSString;

@interface _CNObservableSkipUntilInputObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNObservableSkipUntilInputObserverDelegate> _delegate;

}

@property (readonly) id<CNObserver> observer;                                                      //@synthesize observer=_observer - In the implementation block
@property (__weak,readonly) id<_CNObservableSkipUntilInputObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_CNObservableSkipUntilInputObserverDelegate>)delegate;
-(id<CNObserver>)observer;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
@end

