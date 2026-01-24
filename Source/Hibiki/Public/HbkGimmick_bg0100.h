#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0100.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0100 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool beInstructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetInitStateCountForActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpenNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloseNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBegan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStateCount;
    
public:
    AHbkGimmick_bg0100(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnNoteEvent_bg0100(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
};

