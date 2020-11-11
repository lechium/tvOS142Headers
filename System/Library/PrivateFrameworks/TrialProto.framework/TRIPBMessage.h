/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBUnknownFieldSet, NSMutableDictionary, TRIPBFieldDescriptor, TRIPBExtensionDescriptor;

@interface TRIPBMessage : NSObject <NSSecureCoding, NSCopying> {

	TRIPBUnknownFieldSet* unknownFields_;
	NSMutableDictionary* extensionMap_;
	NSMutableDictionary* autocreatedExtensionMap_;
	TRIPBMessage* autocreator_;
	TRIPBFieldDescriptor* autocreatorField_;
	TRIPBExtensionDescriptor* autocreatorExtension_;
	A@ readOnlySemaphore_;
	TRIPBMessage_Storage* messageStorage_;

}

@property (nonatomic,copy) TRIPBUnknownFieldSet * unknownFields; 
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
+(void)initialize;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)accessInstanceVariablesDirectly;
+(id)descriptor;
+(id)message;
+(id)parseFromData:(id)arg1 error:(id*)arg2 ;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
+(id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)clear;
-(id)descriptor;
-(BOOL)isInitialized;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(TRIPBUnknownFieldSet *)unknownFields;
-(unsigned long long)serializedSize;
-(void)setExtension:(id)arg1 value:(id)arg2 ;
-(id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)internalClear:(BOOL)arg1 ;
-(void)copyFieldsInto:(id)arg1 zone:(NSZone*)arg2 descriptor:(id)arg3 ;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)writeDelimitedToCodedOutputStream:(id)arg1 ;
-(void)writeField:(id)arg1 toCodedOutputStream:(id)arg2 ;
-(void)clearExtension:(id)arg1 ;
-(id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned)arg3 ;
-(void)setUnknownFields:(TRIPBUnknownFieldSet *)arg1 ;
-(id)delimitedData;
-(void)writeToOutputStream:(id)arg1 ;
-(void)writeDelimitedToOutputStream:(id)arg1 ;
-(id)getExtension:(id)arg1 ;
-(id)getExistingExtension:(id)arg1 ;
-(BOOL)hasExtension:(id)arg1 ;
-(id)extensionsCurrentlySet;
-(void)addExtension:(id)arg1 value:(id)arg2 ;
-(void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3 ;
-(void)writeExtensionsToCodedOutputStream:(id)arg1 range:(TRIPBExtensionRange)arg2 ;
@end
