/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLDCFUtilities : NSObject
+(id)insertAuxiliaryResourceTypeMarker:(id)arg1 intoFileName:(id)arg2 ;
+(BOOL)isRenderFileName:(id)arg1 ;
+(id)dcfRegex;
+(BOOL)isValidDCFFileName:(id)arg1 ;
+(id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 filenameMarker:(id)arg4 ;
+(id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)arg1 ;
+(id)renderDCFRegex;
+(id)fileNameByRemovingRenderMarkerInFileName:(id)arg1 ;
+(BOOL)isSpatialOverCaptureFileName:(id)arg1 ;
+(id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)arg1 ;
+(BOOL)fileName:(id)arg1 matchesRegex:(id)arg2 ;
+(id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(unsigned)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(void)computeSHA256OfString:(id)arg1 intoBuffer:(char*)arg2 ;
+(id)encodeFileNameFromHash:(unsigned)arg1 ;
+(id)convertHash:(unsigned)arg1 usingPlaceValues:(id)arg2 ;
+(id)placeValuesFromBases:(id)arg1 ;
@end

