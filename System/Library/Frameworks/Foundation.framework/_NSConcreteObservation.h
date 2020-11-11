/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSObservation.h>

@protocol NSObservable, NSObserver;
@class NSObject;

@interface _NSConcreteObservation : NSObservation {

	NSObject*<NSObservable> _LHSobservable;
	NSObject*<NSObserver> _RHSobserver;
	id _observers[4];

}
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)remove;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
@end
