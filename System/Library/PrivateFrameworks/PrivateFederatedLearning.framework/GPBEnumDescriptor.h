/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GPBEnumDescriptor : NSObject {

	NSString* name_;
	const char* valueNames_;
	const int* values_;
	/*function pointer*/void* enumVerifier_;
	const char* extraTextFormatInfo_;
	unsigned* nameOffsets_;
	unsigned valueCount_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) /*function pointer*/void* enumVerifier; 
@property (nonatomic,readonly) unsigned enumNameCount; 
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 extraTextFormatInfo:(const char*)arg6 ;
-(NSString *)name;
-(void)dealloc;
-(/*function pointer*/void*)enumVerifier;
-(id)initWithName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
-(id)getEnumNameForIndex:(unsigned)arg1 ;
-(void)calcValueNameOffsets;
-(id)getEnumTextFormatNameForIndex:(unsigned)arg1 ;
-(id)enumNameForValue:(int)arg1 ;
-(BOOL)getValue:(int*)arg1 forEnumName:(id)arg2 ;
-(BOOL)getValue:(int*)arg1 forEnumTextFormatName:(id)arg2 ;
-(id)textFormatNameForValue:(int)arg1 ;
-(unsigned)enumNameCount;
@end

