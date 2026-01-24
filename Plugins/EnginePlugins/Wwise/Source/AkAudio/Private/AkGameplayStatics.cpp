#include "AkGameplayStatics.h"

UAkGameplayStatics::UAkGameplayStatics() {
}

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
}

void UAkGameplayStatics::UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkGameplayStatics::UnloadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::UnloadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankUnloadedCallback) {
}

void UAkGameplayStatics::UnloadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopProfilerCapture() {
}

void UAkGameplayStatics::StopPlayingID(int32 PlayingID, int32 fadeOutTimeMs) {
}

void UAkGameplayStatics::StopOutputCapture() {
}

void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopAll() {
}

void UAkGameplayStatics::StopActor(AActor* Actor) {
}

void UAkGameplayStatics::StartProfilerCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartOutputCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject) {
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy) {
    return NULL;
}

void UAkGameplayStatics::SetUpdateListenerPosition(bool bEnable) {
}

void UAkGameplayStatics::SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState) {
}

void UAkGameplayStatics::SetState(UAkStateValue* StateValue, FName StateGroup, FName State) {
}

void UAkGameplayStatics::SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareset) {
}

void UAkGameplayStatics::SetRTPCValueGlobal(FName RTPC, float Value, int32 InterpolationTimeMs, AkGameObjType Type) {
}

void UAkGameplayStatics::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::SetReflectionsOrder(int32 Order, bool RefreshPaths) {
}

void UAkGameplayStatics::SetPanningRule(PanningRule PanRule) {
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
}

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor) {
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
}

void UAkGameplayStatics::SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed) {
}

void UAkGameplayStatics::SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

void UAkGameplayStatics::SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration) {
}

void UAkGameplayStatics::SeekOnEventGlobalByPosition(const FString& in_EventName, int32 in_PositionMsec, bool in_bSeekToNearestMarker, int32 InPlayingID) {
}

void UAkGameplayStatics::SeekOnEventGlobal(const FString& in_EventName, float in_fPercent, bool in_bSeekToNearestMarker, int32 InPlayingID) {
}

void UAkGameplayStatics::SeekOnEventByPosition(const FString& in_EventName, AActor* in_pActor, int32 in_PositionMsec, bool in_bSeekToNearestMarker, int32 InPlayingID) {
}

void UAkGameplayStatics::SeekOnEvent(const FString& in_EventName, AActor* in_pActor, float in_fPercent, bool in_bSeekToNearestMarker, int32 InPlayingID) {
}

bool UAkGameplayStatics::Resume(int32 PlayingID, int32 FadeTimeMs) {
    return false;
}

void UAkGameplayStatics::ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger) {
}

int32 UAkGameplayStatics::PostEventGlobalWithCallback(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, AkGameObjType Type) {
    return 0;
}

int32 UAkGameplayStatics::PostEventGlobal(UAkAudioEvent* AkEvent, AkGameObjType Type) {
    return 0;
}

void UAkGameplayStatics::PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed) {
}

int32 UAkGameplayStatics::PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UAkGameplayStatics::PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
}

int32 UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject) {
    return 0;
}

int32 UAkGameplayStatics::PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& EventName, FLatentActionInfo LatentInfo) {
    return 0;
}

bool UAkGameplayStatics::Pause(int32 PlayingID, int32 FadeTimeMs) {
    return false;
}

void UAkGameplayStatics::LoadInitBank() {
}

void UAkGameplayStatics::LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks) {
}

void UAkGameplayStatics::LoadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::LoadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankLoadedCallback) {
}

void UAkGameplayStatics::LoadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

bool UAkGameplayStatics::IsPlayingByPlayingID(int32 PlayingID) {
    return false;
}

bool UAkGameplayStatics::IsGame(UObject* WorldContextObject) {
    return false;
}

bool UAkGameplayStatics::IsEditor() {
    return false;
}

bool UAkGameplayStatics::IsBankLoaded(UAkAudioEvent* Event) {
    return false;
}

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareset) {
}

float UAkGameplayStatics::GetSourcePlayPosition(int32 PlayingID, bool bExtrapolate) {
    return 0.0f;
}

void UAkGameplayStatics::GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC) {
}

float UAkGameplayStatics::GetOcclusionScalingFactor() {
    return 0.0f;
}

FString UAkGameplayStatics::GetCurrentAudioCulture() {
    return TEXT("");
}

bool UAkGameplayStatics::GetCollisionChannel(AkComponentOcclusionCollisionChannelType Type, TEnumAsByte<ECollisionChannel>& CollisionChannel) {
    return false;
}

TArray<FString> UAkGameplayStatics::GetAvailableAudioCultures() {
    return TArray<FString>();
}

UObject* UAkGameplayStatics::GetAkMediaAssetUserData(const UAkMediaAsset* Instance, const UClass* Type) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

UObject* UAkGameplayStatics::GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type) {
    return NULL;
}

void UAkGameplayStatics::ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve) {
}

void UAkGameplayStatics::ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID) {
}

void UAkGameplayStatics::ClearBanks() {
}

void UAkGameplayStatics::CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback) {
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}


