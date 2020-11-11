/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLRecordView.h>

@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView {

	CPLRecordView* _baseRecordView;
	CPLRecordChange* _change;

}

@property (nonatomic,readonly) CPLRecordView * baseRecordView;              //@synthesize baseRecordView=_baseRecordView - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * change;                    //@synthesize change=_change - In the implementation block
-(id)description;
-(id)redactedDescription;
-(CPLRecordChange *)change;
-(Class)recordClass;
-(id)scopedIdentifier;
-(id)synthesizedRecord;
-(BOOL)supportsResources;
-(id)initWithChange:(id)arg1 overRecordView:(id)arg2 ;
-(id)changeForType:(unsigned long long)arg1 ;
-(CPLRecordView *)baseRecordView;
@end

