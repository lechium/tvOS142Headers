/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class AXMSemanticTextFactory;

@interface AXMTextLayoutManager : NSObject {

	AXMSemanticTextFactory* _semanticTextFactory;

}

@property (nonatomic,retain) AXMSemanticTextFactory * semanticTextFactory;              //@synthesize semanticTextFactory=_semanticTextFactory - In the implementation block
-(id)documentWithTextItems:(id)arg1 canvasSize:(CGSize)arg2 preferredLocales:(id)arg3 applySemanticAnalysis:(BOOL)arg4 error:(id*)arg5 ;
-(AXMSemanticTextFactory *)semanticTextFactory;
-(id)initWithSemanticTextFactory:(id)arg1 ;
-(void)setSemanticTextFactory:(AXMSemanticTextFactory *)arg1 ;
-(id)_assembleLayoutSequences:(id)arg1 canvasSize:(CGSize)arg2 ;
-(id)_assembleLayoutLines:(id)arg1 ;
-(id)_assembleLayoutRegions:(id)arg1 ;
@end

