/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNFutureImpl.h>

@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl> {

	id _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)initWithResult:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)updateDescriptionWithBuilder:(id)arg1 ;
@end
