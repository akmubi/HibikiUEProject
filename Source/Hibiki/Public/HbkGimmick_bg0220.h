#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg0220MoveType.h"
#include "EHbkGimmick_bg0220SaveType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0220.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0220 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0220MoveType bMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0220SaveType bSaveType;
    
public:
    AHbkGimmick_bg0220(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_bg0220(int32 NoteCount, bool bDownBeat);
    
};

