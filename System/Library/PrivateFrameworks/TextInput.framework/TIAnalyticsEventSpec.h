/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSArray;

@interface TIAnalyticsEventSpec : NSObject {

	BOOL _isInputModeRequired;
	NSDictionary* _fieldSpecsByName;
	NSString* _name;
	NSArray* _fieldSpecs;

}

@property (nonatomic,readonly) NSDictionary * fieldSpecsByName;              //@synthesize fieldSpecsByName=_fieldSpecsByName - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isInputModeRequired;                     //@synthesize isInputModeRequired=_isInputModeRequired - In the implementation block
@property (nonatomic,readonly) NSArray * fieldSpecs;                         //@synthesize fieldSpecs=_fieldSpecs - In the implementation block
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 ;
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3 ;
-(id)fieldSpecWithName:(id)arg1 ;
-(NSDictionary *)fieldSpecsByName;
-(BOOL)isInputModeRequired;
-(NSArray *)fieldSpecs;
@end

