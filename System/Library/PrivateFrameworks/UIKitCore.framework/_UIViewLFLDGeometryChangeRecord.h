/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSString, NSValue, UIView;

@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord {

	NSString* _geometricPropertyName;
	NSValue* _geometricPropertyValue;
	UIView* _currentLayoutView;
	NSString* _currentLayoutMethodName;

}

@property (nonatomic,readonly) NSString * geometricPropertyName;                //@synthesize geometricPropertyName=_geometricPropertyName - In the implementation block
@property (nonatomic,readonly) NSValue * geometricPropertyValue;                //@synthesize geometricPropertyValue=_geometricPropertyValue - In the implementation block
@property (nonatomic,readonly) UIView * currentLayoutView;                      //@synthesize currentLayoutView=_currentLayoutView - In the implementation block
@property (nonatomic,readonly) NSString * currentLayoutMethodName;              //@synthesize currentLayoutMethodName=_currentLayoutMethodName - In the implementation block
-(id)description;
-(id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4 ;
-(NSString *)geometricPropertyName;
-(NSValue *)geometricPropertyValue;
-(UIView *)currentLayoutView;
-(NSString *)currentLayoutMethodName;
@end
