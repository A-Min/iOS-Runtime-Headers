/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSData, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int turnaroundTime : 1; 
        unsigned int statusCodeInfo : 1; 
    } _has;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSMutableArray *_placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    double _turnaroundTime;
}

@property(readonly) bool hasMapRegion;
@property bool hasStatusCodeInfo;
@property(readonly) bool hasSuggestionMetadata;
@property bool hasTurnaroundTime;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * namedFeatures;
@property(retain) NSMutableArray * placeResults;
@property int status;
@property int statusCodeInfo;
@property(retain) NSMutableArray * suggestionEntryLists;
@property(retain) NSData * suggestionMetadata;
@property double turnaroundTime;

- (void)_geoMapItemsWithTraits:(id)arg1 handler:(id)arg2;
- (void)addNamedFeatures:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearNamedFeatures;
- (void)clearPlaceResults;
- (void)clearSuggestionEntryLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (bool)hasStatusCodeInfo;
- (bool)hasSuggestionMetadata;
- (bool)hasTurnaroundTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatures;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (id)placeResults;
- (unsigned long long)placeResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCodeInfo:(bool)arg1;
- (void)setHasTurnaroundTime:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (void)setSuggestionEntryLists:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setTurnaroundTime:(double)arg1;
- (int)status;
- (int)statusCodeInfo;
- (id)suggestionEntryLists;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (id)suggestionMetadata;
- (double)turnaroundTime;
- (void)writeTo:(id)arg1;

@end