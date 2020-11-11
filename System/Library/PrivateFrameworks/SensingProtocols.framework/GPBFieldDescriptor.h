/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SensingProtocols/SensingProtocols-Structs.h>
@class GPBOneofDescriptor, NSString, GPBEnumDescriptor;

@interface GPBFieldDescriptor : NSObject {

	GPBMessageFieldDescription* description_;
	GPBOneofDescriptor* containingOneof_;
	SEL getSel_;
	SEL setSel_;
	SEL hasOrCountSel_;
	SEL setHasSel_;
	SCD_Union_GP4 defaultValue_;
	Class msgClass_;
	SCD_Union_GP5* enumHandling_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned number; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (nonatomic,readonly) BOOL hasDefaultValue; 
@property (nonatomic,readonly) /*function pointer*/void* defaultValue; 
@property (getter=isRequired,nonatomic,readonly) BOOL required; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,readonly) unsigned char fieldType; 
@property (nonatomic,readonly) unsigned char mapKeyDataType; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) GPBOneofDescriptor * containingOneof; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) GPBEnumDescriptor * enumDescriptor; 
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(unsigned)number;
-(unsigned char)dataType;
-(BOOL)isOptional;
-(/*function pointer*/void*)defaultValue;
-(BOOL)isRequired;
-(unsigned char)fieldType;
-(id)initWithFieldDescription:(void*)arg1 includesDefault:(BOOL)arg2 syntax:(unsigned char)arg3 ;
-(BOOL)hasDefaultValue;
-(unsigned char)mapKeyDataType;
-(BOOL)isPackable;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(GPBEnumDescriptor *)enumDescriptor;
-(id)textFormatName;
-(Class)msgClass;
-(GPBOneofDescriptor *)containingOneof;
@end

