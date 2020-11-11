/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPModelStoreBrowseSectionUniformContentItemTypeResolver : NSObject {

	BOOL _hasValidUniformContentItemType;
	map<MPModelStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MPModelStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MPModelStoreBrowseDetailedContentItemType, unsigned long> > >* _contentItemTypeOccurrences;
	unsigned long long _totalNumberOfOccurrences;
	long long _uniformContentItemType;

}
-(void)addContentItemType:(long long)arg1 ;
-(long long)uniformContentItemType;
@end

