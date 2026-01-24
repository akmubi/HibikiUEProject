#include "HbkRSSRecorder.h"

UHbkRSSRecorder::UHbkRSSRecorder() {
}

bool UHbkRSSRecorder::RSSRecorder_AppendRecord(UObject* WorldContextObject, EHbkRecordType Type, int32 kind, EHbkRecordTargetType Target) {
    return false;
}

bool UHbkRSSRecorder::RSSRecorder_AppendDebugRecord(UObject* WorldContextObject, int32 kind) {
    return false;
}

void UHbkRSSRecorder::RemoveRSSRecord(int32 RecordId) {
}

bool UHbkRSSRecorder::GetRSSRecord(int32 RecordId, FHbkRSSRecord& Record) {
    return false;
}

void UHbkRSSRecorder::GetRecordTypeColor(const FHbkRSSRecord& Record, FLinearColor& RecordColor) {
}

void UHbkRSSRecorder::GetRecordTextAndColor(const FHbkRSSRecord& Record, FString& RecordText, FLinearColor& RecordColor) {
}

TArray<FHbkRSSRecord> UHbkRSSRecorder::GetRecordList() const {
    return TArray<FHbkRSSRecord>();
}

float UHbkRSSRecorder::GetElapsedTime() const {
    return 0.0f;
}

float UHbkRSSRecorder::GetDeltaTime() const {
    return 0.0f;
}

TArray<int32> UHbkRSSRecorder::CreateNewRecordIdList() {
    return TArray<int32>();
}

bool UHbkRSSRecorder::AppendDebugRecord(int32 kind) {
    return false;
}


