/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject {

	NSDictionary* _UTITypes;
	NSDictionary* _dynamicTypes;

}

@property (nonatomic,copy) NSDictionary * UTITypes;                  //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynamicTypes;              //@synthesize dynamicTypes=_dynamicTypes - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSDictionary *)UTITypes;
-(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(void)setDynamicTypes:(NSDictionary *)arg1 ;
-(Class)_previewGeneratorClassForSourceURL:(id)arg1 ;
-(BOOL)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(Class)previewGeneratorClassForUTIType:(id)arg1 ;
-(NSDictionary *)dynamicTypes;
-(BOOL)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)sizePreviewFromSourceURL:(id)arg1 size:(out CGSize*)arg2 previewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
@end

