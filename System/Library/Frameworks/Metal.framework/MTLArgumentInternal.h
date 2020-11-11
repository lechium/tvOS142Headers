/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLArgument.h>

@class NSString, MTLType, MTLStructType;

@interface MTLArgumentInternal : MTLArgument {

	NSString* _name;
	unsigned long long _type;
	unsigned long long _access;
	unsigned long long _index;
	BOOL _active;
	unsigned long long _arrayLength;
	MTLType* _typeInfo;

}

@property (readonly) MTLStructType * structType; 
-(id)name;
-(id)description;
-(void)dealloc;
-(unsigned long long)type;
-(unsigned long long)index;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isActive;
-(MTLStructType *)structType;
-(unsigned long long)access;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(BOOL)arg5 arrayLength:(unsigned long long)arg6 ;
-(id)dataTypeDescription;
-(id)bufferStructType;
-(unsigned long long)bufferDataType;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataSize;
-(id)bufferPointerType;
-(id)bufferIndirectArgumentType;
-(unsigned long long)threadgroupMemoryAlignment;
-(unsigned long long)threadgroupMemoryDataSize;
-(unsigned long long)textureDataType;
-(unsigned long long)indirectConstantDataType;
-(unsigned long long)indirectConstantAlignment;
-(unsigned long long)indirectConstantDataSize;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(BOOL)arg5 arrayLength:(unsigned long long)arg6 typeDescription:(id)arg7 ;
@end

