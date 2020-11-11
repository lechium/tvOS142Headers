/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCodecIdentity.h>

@class NSString;

@interface PLCodec : PLManagedObject <PLCodecIdentity>

@property (nonatomic,copy) NSString * fourCharCodeName; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)codecFromFourCharCodeName:(id)arg1 createIfMissing:(BOOL)arg2 context:(id)arg3 ;
+(id)commonCodec_HEVC_inContext:(id)arg1 ;
+(id)commonCodec_H264_inContext:(id)arg1 ;
-(BOOL)isPlayable;
-(BOOL)supportsCloudUpload;
-(unsigned)_typeCodeFromString:(id)arg1 ;
@end

