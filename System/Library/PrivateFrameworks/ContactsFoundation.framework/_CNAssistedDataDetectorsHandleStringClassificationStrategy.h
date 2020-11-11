/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CNHandleStringClassificationStrategy.h>

@protocol _CNHandleStringClassificationStrategy;
@class NSString;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy> {

	id<_CNHandleStringClassificationStrategy> _strategy;
	id<_CNHandleStringClassificationStrategy> _assistingStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithStrategy:(id)arg1 ;
-(unsigned long long)classificationOfHandleString:(id)arg1 ;
-(void)makeAssistingStrategyIfNecessary;
@end

