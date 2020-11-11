/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject {

	NSString* _archivePath;
	NSArray* _extractedContentAbsolutePaths;

}

@property (nonatomic,readonly) NSString * archivePath;                               //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) NSArray * extractedContentAbsolutePaths;              //@synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths - In the implementation block
+(id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1 ;
+(BOOL)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2 ;
-(id)initForExtractingArchivePath:(id)arg1 ;
-(BOOL)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3 ;
-(NSString *)archivePath;
-(NSArray *)extractedContentAbsolutePaths;
@end

