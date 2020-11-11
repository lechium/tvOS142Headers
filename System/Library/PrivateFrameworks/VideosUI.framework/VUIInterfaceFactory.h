/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUIDocumentCreator;
#import <VideosUI/VideosUI-Structs.h>
@class NSObject;

@interface VUIInterfaceFactory : NSObject {

	struct {
		BOOL respondsToViewControllerCreation;
	}  _documentCreatorFlags;
	NSObject*<VUIDocumentCreator> _documentCreator;

}

@property (nonatomic,retain) NSObject*<VUIDocumentCreator> documentCreator;              //@synthesize documentCreator=_documentCreator - In the implementation block
+(id)sharedInstance;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 ;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 viewElement:(id)arg3 documentOptions:(id)arg4 ;
-(NSObject*<VUIDocumentCreator>)documentCreator;
-(void)setDocumentCreator:(NSObject*<VUIDocumentCreator>)arg1 ;
@end
