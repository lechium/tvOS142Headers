/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PGSuggestionSession;

@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {

	PGSuggestionSession* _suggestionSession;

}
-(id)initWithManager:(id)arg1 ;
-(unsigned short)questionType;
-(long long)questionOptions;
-(id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)randomAssetsUUIDsWithLimit:(unsigned long long)arg1 ;
@end

