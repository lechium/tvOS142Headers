/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	BOOL addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) BOOL addsContentToExistingCollection; 
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)connect;
-(void)connectForSimulator;
-(NSString *)runtimeCollectionClassName;
-(void)performConnect;
-(void)setRuntimeCollectionClassName:(NSString *)arg1 ;
-(BOOL)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(BOOL)arg1 ;
@end

