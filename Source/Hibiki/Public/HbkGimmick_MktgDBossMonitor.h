#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MktgDBossMonitor.generated.h"

class UTexture;

UCLASS(Blueprintable)
class AHbkGimmick_MktgDBossMonitor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkMktgDBossMonitor_MovieScreen);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMktgDBossMonitor_MovieScreen OnMovieStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMktgDBossMonitor_MovieScreen OnMovieEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMktgDBossMonitor_MovieScreen OnMovieClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMktgDBossMonitor_MovieScreen OnMovieRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopMovieDiffRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayDMGMinNoteCount;
    
public:
    AHbkGimmick_MktgDBossMonitor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteSyncWhole(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void MovieStartFunc(UTexture* NewMediaTexture);
    
    UFUNCTION(BlueprintCallable)
    void MovieEndFunc();
    
    UFUNCTION(BlueprintCallable)
    void MovieCloseFunc();
    
};

