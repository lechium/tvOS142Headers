/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSMutableDictionary, NSString, SABinary;

@interface SASegment : NSObject <SAJSONSerialization, SASerializable> {

	NSMutableArray* _symbols;
	NSMutableDictionary* _inlineSymbols;
	unsigned long long _length;
	NSString* _name;
	long long _offsetIntoBinary;
	SABinary* _binary;
	NSMutableDictionary* _instructions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long length; 
@property (readonly) long long offsetIntoBinary; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)name;
-(NSString *)debugDescription;
-(unsigned long long)length;
-(id)instructionAtOffsetIntoSegment:(unsigned long long)arg1 ;
-(BOOL)hasOffsetIntoBinary;
-(long long)offsetIntoBinary;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA6*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(id)initWithBinary:(id)arg1 name:(id)arg2 length:(unsigned long long)arg3 offsetIntoBinary:(long long)arg4 ;
@end
