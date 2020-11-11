/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TRIPBEnumDescriptor;

@interface TRIPBExtensionDescriptor : NSObject <NSCopying> {

	TRIPBExtensionDescription* description_;
	SCD_Union_TR6 defaultValue_;
	Class containingMessageClass_;

}

@property (nonatomic,readonly) int wireType; 
@property (nonatomic,readonly) int alternateWireType; 
@property (nonatomic,readonly) unsigned fieldNumber; 
@property (nonatomic,readonly) Class containingMessageClass; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (getter=isRepeated,nonatomic,readonly) BOOL repeated; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) NSString * singletonName; 
@property (nonatomic,readonly) TRIPBEnumDescriptor * enumDescriptor; 
@property (nonatomic,readonly) id defaultValue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned char)dataType;
-(id)defaultValue;
-(int)wireType;
-(BOOL)isPackable;
-(TRIPBEnumDescriptor *)enumDescriptor;
-(Class)msgClass;
-(id)initWithExtensionDescription:(TRIPBExtensionDescription*)arg1 ;
-(NSString *)singletonName;
-(const char*)singletonNameC;
-(unsigned)fieldNumber;
-(int)alternateWireType;
-(BOOL)isRepeated;
-(long long)compareByFieldNumber:(id)arg1 ;
-(Class)containingMessageClass;
@end

